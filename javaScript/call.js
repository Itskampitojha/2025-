// call 



// Call Method Example
const person = {
    fullName: function(city, country) {
        return this.firstName + " " + this.lastName + ", " + city + ", " + country;
    }
}

const person1 = {
    firstName: "John",
    lastName: "Doe"
}

// Using call
console.log(person.fullName.call(person1, "New York", "USA"));

// Apply Method Example
const numbers = [5, 6, 2, 3, 7];
const max = Math.max.apply(null, numbers);
console.log("Max value:", max);

// Bind Method Example
const user = {
    firstName: "Jane",
    lastName: "Smith",
    getFullName: function() {
        return this.firstName + " " + this.lastName;
    }
}

const user2 = {
    firstName: "Mary",
    lastName: "Johnson"
}

const getNameBound = user.getFullName.bind(user2);
console.log(getNameBound()); // Will print "Mary Johnson"
