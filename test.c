#include "lcd_driver.h"
#include "button_driver.h"
#include "buzzer_driver.h"

int main() {
	init_lcd_display();
	init_buzzer();
	configure_push_button_array();
	unsigned char str[] = "E MAJOR SCALE";
	puts_str(str);
	while (1) {

		if (left_button_is_pressed()) {
			//E Major
			//E, F♯, G♯, A, B, C♯, D♯, E
			play_freq(412, 1);		//E1 =41.2 Hz
			play_freq(463, 1);		//F#
			play_freq(519, 1);		//G#
			play_freq(550, 1);		//A
			play_freq(617, 1);		//B
			play_freq(693, 1);		//C#
			play_freq(778, 1);		//D#
			play_freq(824, 1);		//E2
		}
	}
}
