from imp import new_module


class Figures:

    def __init__(self,name, color):
        self.name = name
        self.color = color

class Circels(Figures):

    def __init__(self, name, color, radius):
        super().__init__(name, color)
        self.radius = radius

    def get_area(self):
        return (3.14*(self.radius **2))/2

    def get_lenght(self):
        return 2*3.14*self.radius

    def compare_with_other_circles(self, c1):
        return self.get_area>c1.get_area
class Square(Figures):
    
    def __init__(self, name, color, lenght, wight) :
        super().__init__(name, color)
        self.lenght = lenght
        self.wight = wight
    
    def get_area(self):
        return self.lenght*self.wight
    
    def get_perimeter(self):
        return 2*(self.lenght+self.wight)

F1 = Circels('круг', "черный" , 12)
F2 = Square('квадрат', "кара", 12, 15)
F3 = Circels('меньше круг', "Синий", 9)
F4 = Square('кішірек квадрат', "тоже кара", 9, 10)

print(F1.name)
print(F3.name)
print(f'площадь фигуры равна {F1.get_area()}')