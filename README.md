# CS313---HW2 - Jacob Brown

Creating a prefix stack -  Here we know a prefix stack would be creating a stack that can recognize the operands being at the front of the problem and then adjusting them based on how the problem would be acceptable to the computer and then solving. So we have to allow the computer to understand what it is to be prefix. We have to allow the computer to differentiate the symbols and how they perform math. We also have to differentiate numbers and symbols. Here we use isDIgit().

Reversing a string through a file - First we have to create a pathway for the computer to find the correct file. We create a function to read from the file and we set parameters to make sure we are actually reading something that has something in it. After we create this function, we create another function to actually perform the action. We create a stack and allow for strings to be used. We loop through the string length to determine what it is in fact that we are looking at. We verify that the string isn't empty.


Listing and Replacing elements in a stack - Listing the stack, we start out by using a while loop to make sure that the stack isn't empty. If it isn't empty, the while loop will allow us to use the stack and add to it. We push all the elements in. Stacks work on a first in/last out basis. Changing an element in a stack is not as simple. Stacks cannot be iterated through. Therefore, a copy needs to be created for us to change an element based on position. We can set temporary stacks to make this doable.
