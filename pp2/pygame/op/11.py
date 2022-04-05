import pygame
from datetime import datetime
import math

RES = WIDTH, HEIGHT = 595, 600
H_WIDTH, H_HEIGHT = WIDTH // 2, HEIGHT // 2
RADIUS = H_HEIGHT - 50
radius_list = {'sec': RADIUS - 10, 'min': RADIUS - 55, 'hour': RADIUS - 100, 'digit': RADIUS - 30}
RADIUS_ARK = RADIUS + 8

pygame.init()
surface = pygame.display.set_mode(RES)
clock = pygame.time.Clock()

clock60 = dict(zip(range(60), range(0, 360, 6)))  # for hours, minutes and seconds


main = pygame.image.load('D:\pp\pp2\pygame\project2\main.jpg')
def get_clock_pos(clock_dict, clock_hand, key):
    x = H_WIDTH + radius_list[key] * math.cos(math.radians(clock_dict[clock_hand]) - math.pi / 2)
    y = H_HEIGHT + radius_list[key] * math.sin(math.radians(clock_dict[clock_hand]) - math.pi / 2)
    return x, y
minute = pygame.image.load('D:\pp\pp2\pygame\op\min.png')
secund = pygame.image.load('D:\pp\pp2\pygame\op\sec.png')
# определить место размещения
t = datetime.now()
hour, minute, second = ((t.hour % 12) * 5 + t.minute // 12) % 60, t.minute, t.second
# minute_rect = (x_m,y_m,x1_m,x2_m)
# secund_rect = (x_s,y_s,x1_s,x2_s)
# выгрузить объект Surface, который содержит загруженное из файла изображение (myImage), в описанное место на экране (myRect)

while True:
    surface.blit(main, (0, 0))
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            exit()
    
    
    min_new = get_clock_pos(clock60, minute, 'min')
    sec_new = get_clock_pos(clock60, second, 'sec')
    print(min_new)
    print(sec_new)
    break
    # pygame.draw.line(surface, pygame.Color('green'), (H_WIDTH, H_HEIGHT), get_clock_pos(clock60, minute, 'min'), 7)
    # pygame.draw.line(surface, pygame.Color('magenta'), (H_WIDTH, H_HEIGHT), get_clock_pos(clock60, second, 'sec'), 4)
    # surface.blit(minute,minute_rect)
    pygame.display.flip()
    clock.tick(1)