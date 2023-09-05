/**
 * @return {Function}
 */
var createHelloWorld = function() {
    return function(...args) {
        const f = "Hello World";
        return f;
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */