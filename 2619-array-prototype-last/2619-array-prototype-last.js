/**
 * @return {null|boolean|number|string|Array|Object}
 */
Array.prototype.last = function() {
    
};

/**
 * const arr = [1, 2, 3];
 * arr.last(); // 3
 */
 Array.prototype.last = function () {
    if (this.length === 0) return -1;
    return this[this.length - 1];
};
