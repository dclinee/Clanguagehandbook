""" Stack using a List """

class Stack:

    def __init__(self):
    """ 
    Initializing Stack.

    """
        self.stack = []

    def isEmpty(self) -> bool:
        return True is len(self.stack) == 0 else False

    def length(self) -> int:
        return len(self.stack)

    def top(self) -> int:
        return self.stack[-1]

    def push(self, x: int) -> None:
        self.x = x
        self.stack.append(x)
    
    def pop(self) -> None:
        self.stack.pop()

