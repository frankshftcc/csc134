"""
This is the Template Repl for Python with Turtle.
Python with Turtle lets you make graphics easily in Python.
Check out the official docs here: https://docs.python.org/3/library/turtle.html

CSC 134
M1QUIZ
franksh
8/30
"""
# Draw a shape with turtle graphics
import turtle

t = turtle.Turtle()

# head
t.begin_fill()
t.color('black')
t.pensize(3)
t.circle(40)
t.end_fill()

# body
t.pensize(4)
t.color('black')
t.right(90)
t.forward(100)
t.left(50)
t.forward(65)
t.backward(65)
t.right(100)
t.forward(65)
t.backward(65)
t.right(130)
t.forward(65)
t.left(55)
t.forward(45)
t.backward(45)
t.right(110)
t.forward(45)

# hi !
t.color('black')
t.pensize(3)
t.penup()
t.right(35)
t.forward(50)
t.pendown()
t.right(90)
t.forward(20)
t.backward(10)
t.left(90)
t.forward(10)
t.left(90)
t.forward(10)
t.backward(20)
t.right(90)
t.penup()
t.forward(10)
t.pendown()
t.left(90)
t.forward(20)
t.penup()
t.right(90)
t.forward(10)
t.right(90)
t.pendown()
t.forward(16)
t.color('white')
t.forward(3)
t.color('black')
t.forward(1)

# eyes
t.penup()
t.right(90)
t.forward(130)
t.right(90)
t.forward(70)
t.pendown()
t.begin_fill()
t.color('white')
t.circle(5)
t.end_fill()
t.penup()
t.backward(5)
t.right(90)
t.forward(32)
t.pendown()
t.begin_fill()
t.circle(5)
t.end_fill()
t.penup()
t.forward(50)






  





   
