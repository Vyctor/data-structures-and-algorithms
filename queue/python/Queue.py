class Queue:
    def __init__(self):
        self.queue = []
        self.size = 0

    def push(self, element):
        self.queue.append(element)
        self.size = 1

    def pop(self):
        if not self.isEmpty():
            self.queue.pop(0)
            self.size -= 1
        return "Queue is Empty!!!"

    def front(self):
        if not self.isEmpty():
            return self.queue[0]
        return "Queue is Empty!!!"

    def length(self):
        return self.size

    def isEmpty(self):
        return len(self.queue) == 0


q = Queue()
print(q.isEmpty())
q.push(1)
q.push(2)
q.push(3)
q.push(4)
print(q.isEmpty())
print(q.front())
q.pop()
q.pop()
q.pop()
q.pop()
print(q.isEmpty())
print(q.front())
