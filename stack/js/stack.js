class Stack {
    constructor() {
        this.stack = [];
        this.stackLength = 0;
    }

    push(element) {
        this.stack.push(element);
        this.stackLength++;
    }

    pop() {
        if (!this.isEmpty()) {
            this.stack.pop();
            this.stackLength--;
        }
    }

    top() {
        if (!this.isEmpty()) {
            return this.stack[this.length() - 1];
        }
        return "Empty Stack";
    }

    isEmpty() {
        return this.stackLength === 0;
    }

    length() {
        return this.stackLength;
    }
}

const books = new Stack();

books.push("Clean Code");
books.push("Clean Architecture");
books.push("Design Patterns");
books.push("Refactoring");

console.log(books.top());
books.pop();
console.log(books.top());
books.pop();
console.log(books.top());
console.log(books.length());