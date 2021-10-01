import turtle

t = turtle.Turtle()

#   Conditional Statements
a = input("Would u ike to draw a shape? them say yes or no:")
if a == 'yes':
    t = turtle.Pen()
    s = turtle.Screen()
    colors = ['red', 'purple', 'blue', 'green', 'orange', 'white', 'yellow']
    s.bgcolor('black')
    t.speed('fastest')
    turtle.bgcolor('black')
    for x in range(360):
        t.pencolor(colors[x % 6])
        t.width(x / 100 + 1)
        t.forward(x)
        t.left(59)
        t.speed(15)
elif a == 'no' or 'NO' or 'No' or 'nO':
    print("okay!!")
else:
    print("Better luck!!")
