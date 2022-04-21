from turtle import position
import pygame
pygame.init()

def rect_draw(screen,baseLayer,):
    

    prevX = -1
    prevY = -1
    currentX = -1
    currentY = -1
        

    isMouseDown = False

    while True:
        
        pressed = pygame.key.get_pressed()

        
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                return

            if event.type == pygame.MOUSEBUTTONDOWN:
                if event.button == 1: 
                    isMouseDown = True
                    currentX =  event.pos[0]
                    currentY =  event.pos[1]    
                    prevX =  event.pos[0]
                    prevY =  event.pos[1]

            if event.type == pygame.MOUSEBUTTONUP:
                isMouseDown = False
                baseLayer.blit(screen, (0, 0))


            if event.type == pygame.MOUSEMOTION:
                if isMouseDown:
                    currentX =  event.pos[0]
                    currentY =  event.pos[1]
        

        if isMouseDown and prevX != -1 and prevY != -1 and currentX != -1 and currentY != -1:
             screen.blit(baseLayer, (0, 0))
             r = calculateRect(prevX, prevY, currentX, currentY)
             pygame.draw.rect(screen, (0,255, 0),pygame.Rect(r), 1)
             #print("{} {} {} {}".format(prevX, prevY, currentX, currentY))
        
        pygame.display.flip()

        
def calculateRect(x1, y1, x2, y2):
    return pygame.Rect(min(x1, x2), min(y1, y2), abs(x1 - x2), abs(y1 - y2))
