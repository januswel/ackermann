#!/usr/bin/env node

const ackermann = (m, n) => {
    if (m === 0) {
        return n + 1
    }

    if (n === 0) {
        return ackermann(m - 1, 1)
    }

    return ackermann(m - 1, ackermann(m, n - 1))
}

const m = parseInt(process.argv[2], 10)
const n = parseInt(process.argv[3], 10)

console.log(m, n)
console.log(ackermann(m, n))
