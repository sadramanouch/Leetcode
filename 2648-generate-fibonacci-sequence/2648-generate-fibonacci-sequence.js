var fibGenerator = function*() {
    var first = 0;
    var second = 1;
    while (true) {
        yield first;
        [first, second] = [second, first + second];
    }
};