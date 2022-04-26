import pygame as pg

class GameObject:

    def __init__(self, x, y, width, height, image_path):
        image = pg.image.load(image_path)
        self.image = pg.transform.scale(image, (width, height))

        self.x = x
        self.y = y
        self.width = width
        self.height = height
