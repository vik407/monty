#This is a test text designed for the monty.m file interpreter
#used in order to execute instructions to the machine
#using just a few of simple op_codes
#Enjoy


#add some simple values to the stack the word "Hola" in ascii value

push 73
push 112
push 118
push 97
pall

#Testing printing in chars
pstr

#Printing first char
pchar
#adding no printable value to the top
push 2

#add some random numbers

push 10
push 3
push 9
push 30

#apliying calc functions

add
sub
div
mul
mod

pall

