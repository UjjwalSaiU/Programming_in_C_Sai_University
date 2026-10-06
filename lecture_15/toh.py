def tower_of_hanoi(disk , source , middle , destination):
    if disk ==0:
        print(f"Disk {disk} from {source} to {destination}")
        return
    tower_of_hanoi(disk-1,source ,destination,middle)
    print(f"Disk {disk} from {source} to {destination}")
    tower_of_hanoi(disk-1,middle,source,destination)
tower_of_hanoi(2,"A","B","C")