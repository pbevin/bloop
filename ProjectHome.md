This is a simple compiler written by Jaap Weel for a programming project class at Caltech. It compiles the BlooP/FlooP programming language from Douglas Hofstadter's book Gödel, Escher, Bach. (BlooP and FlooP are different in only one feature. We expect to support GlooP any day now.)

The compiler is implemented in Haskell, and explores several ideas that I was interested in at the time, including generic programming, parser combinators, literate programming, and most of all, human-readable compiler output. By that, I mean that the compiler is tweaked so as to output C code that looks more or less like an actual C programmer could have written it. (If you don't see why this is an interesting idea to pursue, imagine you have a million lines of FORTRAN and you would like to port your project to C.)

For more information, please read the BloopReport.

You can find the author's web site at http://www.ugcs.caltech.edu/~weel , and you can email him at weel at ugcs dot caltech dot edu .

