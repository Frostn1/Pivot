# _Pivot_
- Pivot is a new dynamically built language with inbuilt functions.

## Pivot files
Pivot files will be a plaing text with a special extension of `.io`.

Code will be writted right into the file with a text editor of some sort, without any other outside Programs.

## Pivot's Grammer
Pivot's grammar is {close} to C's grammer.
- Main entry point will always be from the function main is follows :
    ```go
    func main() {
        // Some code
        return inf
    }
    ```
- Line endings will be specified with a `;`.

Note that the return on the `main` function is to represent the amount of time in seconds the program should wait before exiting.


### Pivot's Data types
As Pivot is a dynamic language with type deduction, these types will not be used to declare variables, only as a spec.
- #### Digital
    The `digital` data type will consist of 2 sub types also known in other languages as `int` and `double` ( or `float`).
    For an example :
    ```go
    func main() {
        integerNumber = 15; // 15
        floatNumber = 5.2; // 5.2
        return inf;
    }
    ```

- #### Char
    The `char` data type will be used to represent numbers from 0 to 255 as letters.
    For an example :
    ```go
    func main() {
        letter = 'a'; // a
        return inf;
    }
    ```

- #### Str
    The `str` data type will be used to represent a sequence of `char` data types to form a word or a sentence.
    For an example :
    ```go
    func main() {
        word = 'Pivot'; // Pivot
        sentence = 'Pivot is a dynamic language'; // Pivot is a dynamic language
        return inf;
    }
    ```
    You will be able to embed variables or expressions inside of strings (seen in js), with the use of the sequence of `${}`, where the expression will be inside of the curly braces.
    For an example :
     ```go
    func main() {
        currentYear = 2021; // 2021
        sentence = 'Pivot was created in ${currentYear}'; // Pivot was created in 2021
        return inf;
    }
    ```

- #### Boolean
    The `boolean` ( or `bool` for short) data type will be used to represent `true` or `false` case in the Pivot Lanuage, such as seen in numerous other languages.
    For an example :
    ```go
    func main() {
        trueCase = true; // true
        falseCase = false; // false
        return inf;
    }
    ```

- #### Chain : WIP
    The `chain` data type will be act like a normal array in some languages but with added fields for usage such as :
    - `id`, current index in the current chain variable
    - `length`, the length of the current chain variable
    - `markup`, the memory\length of a single item in the current chain variable
    A `chain` variable will be recognized with the chevron symbol (aka `<>`).
    For an example :
    ```go
    func main() {
        chainVariable = <'Pivot is cool', 2021, true>; // <'Pivot is cool', 2021, true>
        return inf;
    }
    ```

- ### Runes
    Runes are a special data type which are different way of viewing / expressing data types, and can be seen as a modification of normal data types.

    `Note: Runes are currently not user creatable, but may be a feature in the future.`

    - #### Inf
        The `inf` rune is used to represent the number infinity (aka countable infinity).
        The `inf` rune is a 'rune' of the `digital` data type as it is a number.
        The `inf` rune can be added with different operators to be acted different such as :
        - `-`, Used for creating minus infinity;
        - `~`, Used to reset the infinity and making it 0
        For an example :
        ```go
        func main() {
            infVariable = inf; // inf
            minusInfVariable = -inf; // -inf
            zero = ~inf; // 0
            return inf;
        }
        ```
    - #### Null
        The `null` rune is used to represent lack of data or nothing, also used in other famous languages such as C and Python (aka None).
        The `inf` rune is a 'rune' of the `boolean` data type as the `null` rune is also the equivalent of false or nothing.
        For an example :
        ```go
        func main() {
            nullVariable = null; // null
            return inf;
        }
        ```
- ### Modifiers
    Modifiers are tools used to change and read data in a different way and manipulate it into our needs.
    Such as :
    - `~`, Used for resetting data or a variable to zero or to blank values
    - `&`, Used to get the memory address of a variable to change it in theh low level
    - `#`, Used for deep copying of a variable

    `Note: More modifiers will be featured in the future.`
    For an example :
    ```go
        func main() {
            copySrc = 5;
            copyDst = #copySrc; // 5

            copySrc = 'Pivot Programming Language';
            copyDst = ~copySrc; // ''
            return inf;
        }
    ```
- ### User Made Functions
    user made functions can be created with the `func` keyword as such :
    ```go
        func foo() {
        }
    ```
    The syntax for functions are as followed - 
    `func keyword, function's name, parameter list, block with the function's code inside`.

- ### Function Overrides
    Built in functions can be overridden with the user's made functions. 
    This feature consists of two different ways to override:
    - one is to run a function before the called function and then return value from that function will be given as the parameter for the called function.

    To declare such a function we will use the `pre` keyword, as our function run before theh called function.
    For an example :
    ```go
        // the `num` parameter here is the parameter given to the print function call at the main function, as we return it we give this return value to the print function
        pre print(int num : {
        return num + 1;
        })

    func main() {
        init num = 3;
        print(num); // 4
        return inf;
    }
    ```
    - The second way is to run the user's made function after the called function has finished executing and the return value from that function will be returned as the called function's return value.

    To declare such a function we will use the `base` keyword, for the function to run after the called function has finished executing.
    For an example :
    ```go
        // the `num` parameter here is the return value returned from the `get` function called as input, and we can alter it and then return it, or even return a different value all together
        base get(int num : {
        return num * 2;
        })

    func main() {
        init num = 3;
        num = get(num); // 6
        return inf;
    }
    ```


