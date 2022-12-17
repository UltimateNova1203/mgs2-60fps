# mgs2-60fps
 MGS2 PC 60FPS Fix

Simple mod to disable frame skipping, allowing all cutscenes to run at 60FPS, as god intended.

## Affected address
Address 0x006E352F is the home to the frame skip value we change (2). All other uses of the frame divider (at 0x00BB6198) set it to either 0 or 1, which means it's not skipping frames. This mod patches the only time it is set to 2, therefore allowing it to never skip frames.

## Side affects
* Smoother cutscenes
* Fixed poncho physics in Tanker Intro (Demo 1)
* Fixed rope physics in Tanker Intro (Demo 1, Demo 2)
* Fixed perceived choppiness in all other cutscenes that flip between skipping and not
* Does not change any framebuffer effects that simulate a lower framerate (Tanker Intro while panning around Poncho Snake). These already run at the normal framerate, but use a texture to fake a lower framerate.
