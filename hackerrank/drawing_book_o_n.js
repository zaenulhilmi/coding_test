'use strict';

const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(str => str.trim());

    main();
});

function readLine() {
    return inputString[currentLine++];
}

/*
 * Complete the pageCount function below.
 */
function pageCount(n, p) {
    let counterLeft = 0;
    for(let i = 0; i <= p; i+=2){
        counterLeft++;
    }

    let start = 0
    if(p % 2 == 1){
        start = p - 1
    } else {
        start = p
    }

    let counterRight = 0
    for(let i = start; i <= n; i+=2){
        counterRight++;
    }

    return counterLeft < counterRight ? counterLeft-1 : counterRight-1;
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const n = parseInt(readLine(), 10);

    const p = parseInt(readLine(), 10);

    let result = pageCount(n, p);

    ws.write(result + "\n");

    ws.end();
}

