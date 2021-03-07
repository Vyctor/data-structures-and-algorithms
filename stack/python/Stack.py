class Stack:
    def __init__(self):
        self.stack = []
        self.size = 0

    def push(self, element):
        self.stack.append(element)
        self.size += 1

    def pop(self):
        if not self.empty():
            self.stack.pop()
            self.size -= 1

    def top(self):
        if not self.empty():
            return self.stack[-1]
        return "Empty stack!!!"

    def empty(self):
        if self.size == 0:
            return True
        return False

    def length(self):
        return self.size
