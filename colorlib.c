#include "colorlib.h"

cy_rslt_t init_colors( void )
{
  return cy_rgb_led_init( CYBSP_LED_RGB_RED, CYBSP_LED_RGB_GREEN, CYBSP_LED_RGB_BLUE, CY_RGB_LED_ACTIVE_LOW );
}

void color( color_t color )
{
  cy_rgb_led_on( color, CY_RGB_LED_MAX_BRIGHTNESS );
}
