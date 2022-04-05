import pygame
from time import sleep
from datetime import datetime
pygame.init()
screen = pygame.display.set_mode((595, 600))
clock = pygame.time.Clock()

minutes = pygame.image.load('D:\pp\pp2\pygame\project2\min.png')
secund = pygame.image.load('D:\pp\pp2\pygame\project2\sec.png')
main = pygame.image.load('D:\pp\pp2\pygame\project2\main.jpg')

w, h = secund.get_size()
w1, h1 = minutes.get_size()
w2, h2 = main.get_size()
angle = 360
done = False
cnt = 0
t = datetime.now()
hour, minute, second = ((t.hour % 12) * 5 + t.minute // 12) % 60, t.minute, t.second
print(w,h)
print(w1,h1)
print(w2,h2)

def null_pos(image, name):
    



while not done:
    t = datetime.now()
    minute, second = t.minute, t.second
    clock.tick(0)
    screen.blit(main,(0,0))
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            done = True
    # print(f"{minute}':'{second}")
    
    sleep(1)
    pygame.display.flip()
    
pygame.quit()
exit()