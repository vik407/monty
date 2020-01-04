#This is a test text designed for the monty.m file interpreter
#used in order to execute instructions to the machine
#using just a few of simple op_codes
#Enjoy


#add some simple values to the stack the word "Hola" in ascii value

push 97
push 108
push 111
push 72
pall

#Testing printing in chars
pstr

#Printing first char
pchar
#adding no printable value to the top
push 2
#pchar
#add some random numbers

push 10
push 3
push 9
push 30

#apliying calc functions

add
pall
sub
pall
div
pall
mul
pall
mod

pall

