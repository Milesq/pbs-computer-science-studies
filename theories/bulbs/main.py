while True:
    bulbs_state = 0b0000000

    n = int(input('Choose bulb number: '))
    target_mode = bool(input('What do u want to do? '))

    current_mode = bool(bulbs_state & (1 << n))
    print(f'Current status: {current_mode}')

    if target_mode:
        bulbs_state |= 1 << n
    else:
        bulbs_state &= ~(1 << n)

    for i in range(7):
        print(f'{i} - {bool(bulbs_state & (1 << i))}')
