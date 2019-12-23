# Remove Files

Delete a file or files in a folder by its extension

## Libraries

Only two libraries except I/O library.
```bash
#include<string.h>
#include<windows>
```
## Usage

Clone the zip file
```bash
git clone https://github.com/lcbiplove/removefiles.git
```
Open the zip file and edit .cpp file with your favourite IDE. Change the password in line 6 of "yourpassword" with your desired password.
```c++
#define PASSWORD "yourpassword";
```
Compile the file. Now, place the file in the folder you want to delete.

## Limitations

1. The file you want to delete mustn't have readonly attribute in properties.
    - To make all files in a folder attribute <b>uncheck readme</b> from the parent folder.
2. The directory shouldn't have <b>whitespace</b> character

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
Copyright (c) [2019] [Biplove]

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.


