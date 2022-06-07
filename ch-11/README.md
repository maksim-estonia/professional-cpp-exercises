## Chapter 11: Odds and Ends

## EX-1

Write a single-file module called `simulator` containing two classes, `CarSimulator` and `BikeSimulator`, in a `Simulator` namespace. The content of the classes is not important for these exercises. Just provide a default constructor that outputs a message to the standard output. Test your code in a `main()` function.

## EX-2

Take your solution from ex 11-1 and split the module into several files: a primary module interface file without any implementations and two module implementation files, one for the `CarSimulator` and one for the `BikeSimulator` class.

## EX-3

Take your solution from ex 11-2 and convert it to use one primary module interface file and two module interface partition files, one for the `simulator::car` partition containing the `CarSimulator` class, and one for the `simulator::bike` partition containing the `BikeSimulator` class.

## EX-4

Take your solution from ex 11-3 and add an implementation partition called `internals`, containing a helper method called `convertMilesToKm(double miles)` in the Simulator namespace. One mile is 1.6 kilometer. Add a method to both the `CarSimulator` and `BikeSimulator` classes called `setOdometer(double miles)`, which uses the helper method to convert the given miles to kilometers and then prints out to the standard output. Confirm in your `main()` function that the `setOdometer()` works on both classes. Also confirm that `main()` cannot call `convertMilesToKm()`.


