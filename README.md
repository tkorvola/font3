# Z-machine graphics font

This is a quick sketch of a scalable graphics font for the Infocom
Z-machine, used in the game Beyond Zork.  It is intended for use with
SDL [Frotz].  The default bitmap font embedded in SDL Frotz was used
as a starting point by converting it to BDF and importing to Fontforge
as background, which was then autotraced with Potrace.

SDL Frotz expects the scalable graphics font to be monospace with
advance and line height equal to size.  Em squares of printed glyphs will
thus form a grid, adjacent to each other horizontally and vertically.
Code points and example glyphs are defined in the
[Z-Machine specification][font3].  SDL Frotz scales the graphics font to
match the advance and line height of the monospace text font, which
usually causes a bit of vertical stretching.

[Frotz]: https://github.com/DavidGriffith/frotz/
[font3]: http://inform-fiction.org/zmachine/standards/z1point1/sect16.html
