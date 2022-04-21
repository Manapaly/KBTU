import pygame

pygame.init()
screen = pygame.display.set_mode((800, 600))
screen.fill((255, 255, 255))
# screen.fill((0, 0, 0))

bg = pygame.image.load("D:\pp\pp2\Lab8\images\MAIN_PAINT.png")
bg = pygame.transform.scale(bg, (800, 600))
lg = pygame.image.load("D:\pp\pp2\Lab8\images\MAIN_PAINT2.png")
lg = pygame.transform.scale(lg, (64, 600))
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)
RED = (255, 0, 0)
GREEN = (0, 255, 0)
BLUE = (0, 0, 255)

def line(screen, start, end, d, color):
    x1 = start[0]
    y1 = start[1]
    x2 = end[0]
    y2 = end[1]

    dx = abs(x1 - x2)
    dy = abs(y1 - y2)

    A = y2 - y1
    B = x1 - x2
    C = x2 * y1 - x1 * y2

    if dx > dy:
        if x1 > x2:
            x1, x2 = x2, x1
            y1, y2 = y2, y1

        for x in range(x1, x2):
            y = (-C - A * x) / B
            pygame.draw.circle(screen, color, (x, y), d)
    else:   
        if y1 > y2:
            x1, x2 = x2, x1
            y1, y2 = y2, y1
        for y in range(y1, y2):
            x = (-C - B * y) / A
            pygame.draw.circle(screen, color, (x, y), d)
        

def rectangle(screen, start, end, d, color):
    x1 = start[0]
    y1 = start[1]
    x2 = end[0]
    y2 = end[1]

    width = abs(x1-x2)
    height = abs(y1-y2)

    if x1 <= x2:
        if y1 < y2:
            pygame.draw.rect(screen, color, (x1, y1, width, height), d)
        else:
            pygame.draw.rect(screen, color, (x1, y2, width, height), d)
    else:
        if y1 < y2:
            pygame.draw.rect(screen, color, (x2, y1, width, height), d)
        else:
            pygame.draw.rect(screen, color, (x2, y2, width, height), d)



def circle(screen, start, end, d, color):
    x1 = start[0]
    y1 = start[1]
    x2 = end[0]
    y2 = end[1]

    width = abs(x1-x2)
    height = abs(y1-y2)

    if x1 <= x2:
        if y1 < y2:
            pygame.draw.ellipse(screen, color, (x1, y1, width, height), d)
        else:
            pygame.draw.ellipse(screen, color, (x1, y2, width, height), d)
    else:
        if y1 < y2:
            pygame.draw.ellipse(screen, color, (x2, y1, width, height), d)
        else:
            pygame.draw.ellipse(screen, color, (x2, y2, width, height), d)


last_pos = (0, 0)
w = 2
draw_line = False
erase = False
ed = 50

d = {
    'line' : False,
    'rect': False,
    'circle': False,
    'erase': False
}

running = True
screen.blit(bg, (0, 0))

while running:
    pos = pygame.mouse.get_pos()
    rec_pos = pygame.mouse.get_pos()
    screen.blit(lg, (0, 0))
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        if event.type == pygame.MOUSEBUTTONDOWN:
            x, y = pos 
            print(pos)
            if x > 7 and x < 53 and y > 58 and y < 96:
                d['line'] = True
                for k, v in d.items():
                    if k != 'line':
                        d[k] = False
            if x > 7 and x < 53 and y > 104 and y < 127:
                d['rect'] = True
                for k, v in d.items():
                    if k != 'rect':
                        d[k] = False
            # if event.key == pygame.K_c:
            #     d['circle'] = True
            #     for k, v in d.items():
            #         if k != 'circle':
            #             d[k] = False
            if x > 7 and x < 58 and y > 10 and y < 58:
                d['erase'] = True
                for k, v in d.items():
                    if k != 'erase':
                        d[k] = False

                    
        if d['line'] == 1:
            if event.type == pygame.MOUSEBUTTONDOWN:
                last_pos = pos
                pygame.draw.circle(screen, (0, 0, 0), pos, w)
                draw_line = True
            if event.type == pygame.MOUSEBUTTONUP:
                draw_line = False
            if event.type == pygame.MOUSEMOTION:
                if draw_line:
                    line(screen, last_pos, pos, w, (0, 0, 0))
                last_pos = pos
        elif d['rect'] == 1:
            last_pos = pos
            if event.type == pygame.MOUSEBUTTONDOWN:
                last_pos = pos
            if event.type == pygame.MOUSEMOTION:
                surf = pygame.Surface((abs(pos[0] - last_pos[0]), abs(pos[1] - last_pos[1])))
                # surf.fill((0, 255, 0))
                rectangle(surf,last_pos, pos, w, (255, 0, 0))
                screen.blit(surf, last_pos)
            if event.type == pygame.MOUSEBUTTONUP:
                rectangle(screen, last_pos, pos, w, (255, 0, 0))
                # circle(screen, last_pos, pos, d, (255, 0, 0))
        elif d['circle'] == 1:
            if event.type == pygame.MOUSEBUTTONDOWN:
                last_pos = pos
            if event.type == pygame.MOUSEBUTTONUP:
                # rectangle(screen, last_pos, pos, d, (255, 0, 0))
                circle(screen, last_pos, pos, w, (255, 0, 0))
        elif d['erase'] == 1:
            if event.type == pygame.MOUSEBUTTONDOWN:
                (x, y) = pos
                pygame.draw.rect(screen, (255, 255, 255), (x, y, ed, ed))
                erase = True
            if event.type == pygame.MOUSEMOTION:
                if erase:
                    pygame.draw.rect(screen, (255, 255, 255), (pos[0], pos[1], ed, ed))
            if event.type == pygame.MOUSEBUTTONUP:
                erase = False


        

    pygame.display.update()
pygame.quit()
    