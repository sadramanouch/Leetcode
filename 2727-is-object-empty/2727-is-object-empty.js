/**
 * @param {Object|Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {
    if (typeof obj === 'object') {
        // If it's an array, check if it has any elements
        if (Array.isArray(obj)) {
            return obj.length === 0;
        }
        // If it's an object, check if it has any key-value pairs
        for (let key in obj) {
            if (obj.hasOwnProperty(key)) {
                return false;
            }
        }
        return true;
    }
    // If the input is not an object or array, it's considered non-empty
    return false;
};