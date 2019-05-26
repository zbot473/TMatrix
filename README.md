# TMatrix
TMatrix is a program that simulates the digital rain form The Matrix.
It's focused on being the most accurate replica of the digital rain effect achievable on a typical terminal, while also being customizable and performant.

### Build and install
#### Tools
This project uses C++17 so you'll need the latest tools in order you build it:
- [CMake 3.8+](https://cmake.org/download/)
- [GCC 7+](https://gcc.gnu.org/)

#### Library:
- [ncurses](https://www.gnu.org/software/ncurses/)

#### Commands
After cloning the repository run:
```
cd tmatrix
mkdir -p build && cd build
cmake -DCMAKE_INSTALL_PREFIX:PATH=bin/ ..
make -j8
sudo make install
```

### Options
Run `man tmatrix` or `tmatrix --help` to see available options.

### Contributing
Suggestions, bug reports and patch submissions are all welcome.
You can create an [issue](../../issues), send a [pull requests](../../pulls) of just send an [email](mailto:mc.cm.mail@gmail.com).
For details see [CONTRIBUTING.md](../master/CONTRIBUTING.md).

### Author
Written and maintained by Miloš Stojanović \<[mc.cm.mail@gmail.com](mailto:mc.cm.mail@gmail.com)\>.

### License
TMatrix is licensed under the `GPL-2.0-only` - see the [LICENSE](../master/LICENSE) file for details.

### How it looks:
![](assets/img/TMatrix.png?raw=true)
![](assets/img/TMatrix.gif?raw=true)
