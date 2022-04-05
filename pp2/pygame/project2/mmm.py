import pygame

pygame.init()
screen = pygame.display.set_mode((595, 600))
clock = pygame.time.Clock()

def blitRotate(surf, image, pos, originPos, angle):

    # offset from pivot to center
    image_rect = image.get_rect(topleft = (pos[0] - originPos[0], pos[1] - originPos[1]))
    offset_center_to_pivot = pygame.math.Vector2(pos) - image_rect.center
    
    # roatated offset from pivot to center
    rotated_offset = offset_center_to_pivot.rotate(-angle)

    # roatetd image center
    rotated_image_center = (pos[0] - rotated_offset.x, pos[1] - rotated_offset.y)

    # get a rotated image
    rotated_image = pygame.transform.rotate(image, angle)
    rotated_image_rect = rotated_image.get_rect(center = rotated_image_center)

    surf.blit(rotated_image, rotated_image_rect)
  
minutes = pygame.image.load('D:\pp\pp2\Lab7\min.png')
secund = pygame.image.load('D:\pp\pp2\pygame\project2\sec.png')
w, h = secund.get_size()
w1, h1 = minutes.get_size()
angle = 360
done = False
main = pygame.image.load('D:\pp\pp2\pygame\project2\main.jpg')
cnt = 0
while not done:
    clock.tick(0)
    screen.blit(main,(0,0))
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            done = True

    pos = (screen.get_width()/2, screen.get_height()/2)
    
    # screen.fill()
    blitRotate(screen, secund, pos, (w/2, h/2), angle)
    blitRotate(screen, minutes, pos, (w1/2-15, h1/2-15), angle)
    # blitRotate2(screen, minutes, pos, angle)
    angle -= 1

    pygame.display.flip()
    
pygame.quit()
exit()