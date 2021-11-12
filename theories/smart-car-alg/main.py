def go_through_intersection(direction: Dir):
    lights: Light = detect_lights()

    if lights in [Light.RED, Light.ORANGE]:
        return
    elif lights == Light.COLLISION_FREE:
        go(direction)
    elif lights in [Light.GREEN, Light.DISABLED]:
        while detect_pedestrians():
            wait(500)

        go(to='conditional-stop-line')

        ignore_road_signs = lights == Light.DISABLED
        go_through_common_intersection(direction, ignore_road_signs)


def go_through_common_intersection(direction: Dir, ignore_road_signs = False):
    direction_priority_map = {
        Dir.Straight: [],
        Dir.Left: [Dir.Straight],
        Dir.Right: [],
    }

    is_subordinated = does_sign_apply([Sign.STOP, Sign.GIVE_WAY])

    if ignore_road_signs:
        direction_priority_map[Dir.Straight].append(Dir.Right)
        direction_priority_map[Dir.Left].append(Dir.Right)
    elif is_subordinated:
        direction_priority_map[Dir.Right].append(Dir.Left)
        direction_priority_map[Dir.Left].append(Dir.Left, Dir.Right)

    for priority_road in direction_priority_map:
        while detect_car(priority_road):
            wait(500)

    go(direction)
