/**
 * @param {Function[]} functions
 * @return {Function}
 */
var compose = function(functions) {
    return function(x) {
        // Start with the initial value x
        let result = x;
        
        // Apply each function in reverse order
        for (let i = functions.length - 1; i >= 0; i--) {
            result = functions[i](result);
        }
        
        return result;
    };
};