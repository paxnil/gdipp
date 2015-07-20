# gdipp
Automatically exported from code.google.com/p/gdipp

The gdipp (codename) project is a replacement of the Windows text render, which brings to you the effect of text like Mac OS and Linux distributions. It is easy to use with ignorable overhead, and it is fully customizable.

The project is originated as the relaunch of the suspended gdi++.dll project. Like the InkStone project, we found the source code of gdi++.dll project too complex to manage, and decide to start over a new code base. The goal of gdipp project is to continue the development of gdi++, expand functionality, improve performance, provide better compatibility for the current and future Windows versions (potentially at the cost of removing compatibility for old Windows), create detailed and formal documentation, as well as tools to help using it.

gdipp Project supports both 32-bit and 64-bit Windows 7/Vista. You can install 32-bit and 64-bit components separately. The 32-bit components only renders 32-bit applications, while the 64-bit components only renders 64-bit applications in 64-bit Windows. Both components share the same setting file. gdipp also works correctly on Windows XP and 2003. However, due to the significant difference in the system architectures, the rendering may be less stable and compatible. gdi++ or ezgdi are alternative choices of Windows text renderers.

We are happy to welcome new members. If you are interested in this project and wish to contribute your code, just leave us an email.

The next-generation gdipp has accomplished the following goals:

Client-server model
FreeType renderer
GGO renderer
DirectWrite renderer
GDI painter
Fine-grain glyph/glyph run cache synchronization
Project renaming and moving
gdimm.dll plans
Persistent caching (e.g. SQLite, Redis)
Support for vertical text
Support for right-to-left text
Project-scale plans
gdipp Preview
Kernel-mode hooking (driver)
Windows Mobile systems support
The following pictures below illustrate the difference between the Windows font renderer ClearType and gdipp. For each figure, the first picture is taken from ClearType while the second is taken from gdipp. Pay attention to the anti-aliased effect gdipp exhibits.
 
