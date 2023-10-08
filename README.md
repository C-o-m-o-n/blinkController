# Blink Controller with Color Changing

![Arduino](https://img.shields.io/badge/Arduino-Compatible-blue)
![License](https://img.shields.io/badge/license-GPL-green)

This Arduino sketch provides a versatile Blink Controller that allows you to control an LED (or an RGB LED) using serial communication. You can easily turn the LED on/off, make it blink, and change its color (for RGB LEDs) by sending specific commands via the Arduino Serial Monitor.

## Features

- **Turn LED On/Off**: Send 'b' to turn the LED on and 'q' to turn it off.
- **Blink Mode**: Send 'l' to make the LED blink. The color changes while blinking.
- **Color Changing (for RGB LEDs)**: Send 'r' for red, 'g' for green, and 'b' for blue (for RGB LEDs).
- **Case-Insensitive**: Commands are case-insensitive, making it user-friendly.

## Getting Started

1. **Hardware Setup**:
   - Connect your LED (or RGB LED) to the appropriate pins on your Arduino board.
   - Ensure you have the necessary components set up for serial communication (e.g., USB cable, Arduino IDE).

2. **Upload the Sketch**:
   - Open the Arduino IDE, load this sketch, and upload it to your Arduino board.

3. **Open the Serial Monitor**:
   - Open the Arduino Serial Monitor (Tools -> Serial Monitor) or any serial communication terminal.

4. **Control the LED**:
   - Use the following commands to control the LED:
     - 'b' to turn it on.
     - 'q' to turn it off.
     - 'l' to make it blink with color changing.
     - 'r' for red (for RGB LEDs).
     - 'g' for green (for RGB LEDs).
     - 'b' for blue (for RGB LEDs).

5. **Enjoy!**:
   - Experiment with different commands and enjoy controlling your LED.

## Example Usage

- To turn the LED on: Send 'b'.
- To turn the LED off: Send 'q'.
- To make the LED blink: Send 'l'.
- To set the LED color to red (for RGB LEDs): Send 'r'.
- To set the LED color to green (for RGB LEDs): Send 'g'.
- To set the LED color to blue (for RGB LEDs): Send 'b'.

## License

This project is licensed under the **GPL 3.0** License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Thanks to [Collins Omondi](https://github.com/C-o-m-o-n) for creating this code and making it available on [GitHub](https://github.com/C-o-m-o-n/blinkController).

**Enjoy tinkering with your LED and have fun coding!** 🚀
