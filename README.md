# Bridge Structural Design Pattern

This repository contains an implementation of the Bridge structural design pattern in Java. The Bridge pattern is used to decouple an abstraction from its implementation so that the two can vary independently. It is particularly useful when there are multiple orthogonal dimensions of variation in a system.

## Files

- `BridgePatternExample.java`: Contains the main class demonstrating the usage of the Bridge pattern with example shapes.
- `Circle.java`: Defines the `Circle` class, which is a concrete implementation of the `Shape` interface. It uses the Bridge pattern to set its color independently.
- `Color.java`: Defines the `Color` interface, which represents the abstraction for colors used in shapes.
- `Green.java`: Represents the concrete implementation of the `Color` interface for green color.
- `Red.java`: Represents the concrete implementation of the `Color` interface for red color.
- `Shape.java`: Defines the `Shape` interface, which represents the abstraction for shapes.
- `Square.java`: Defines the `Square` class, which is a concrete implementation of the `Shape` interface. It also uses the Bridge pattern to set its color independently.

## Usage

To run the example and see the Bridge pattern in action, execute the `BridgePatternExample` class. This will demonstrate drawing a circle and a square with different colors, as well as changing the color of the circle dynamically.

## Dependencies

This project uses Lombok annotations for getter and setter methods. Make sure you have Lombok set up in your development environment to compile and run the code successfully.

## Acknowledgments

Special thanks to the creator(s) of Project Lombok for developing such a powerful and time-saving library. Lombok greatly simplifies Java development by reducing boilerplate code and enhancing productivity. Without Lombok, maintaining and writing Java code, especially with the getter and setter methods, would be much more cumbersome. We appreciate the dedication and effort put into creating and maintaining Lombok, which has become an invaluable tool for Java developers worldwide.

