class Queue {
    constructor() {
        this.queue = [];
        this.size = 0;
    }

    length() {
        return this.size;
    }

    isEmpty() {
        return this.size === 0;
    }

    push(item) {
        this.queue.push(item);
        this.size++;
    }

    pop() {
        if (!this.isEmpty()) {
            this.queue.splice(0, 1);
            this.size--;
        }
        return "Queue is empty!!!";
    }

    front() {
        if (!this.isEmpty()) {
            return this.queue[0];
        }
        return "Queue is empty!!!";
    }
}

/**
 * Add:
 * 1 FRONT
 * 2
 * 3
 * 4
 * 5
 */

const queue = new Queue();
console.log(queue.isEmpty());
queue.push(1);
queue.push(2);
queue.push(3);
queue.push(4);
queue.push(5);
console.log(queue.front());
queue.pop();
console.log(queue.front());
queue.pop();
console.log(queue.front());
queue.pop();
console.log(queue.front());
queue.pop();
console.log(queue.front());
queue.pop();
console.log(queue.front());
console.log(queue.isEmpty());