# MPI_Parallel



﻿MPI parallel using C++ library dealii. In order to run code dealii library should be installed. Further cmake creates build files with Eclipse.

To build from the repository, execute the following commands first:

$ mkdir mpi_parallel

$ cd mpi_parallel

$ git clone https://github.com/Heena008/Meshes-in-dealii.git msfem

$ cmake -DDEAL_II_DIR=/path/to/dealii -G"Eclipse CDT4 - Unix Makefiles" ../mpi_parallel

$ make debug

$ make run

License: Please see the file ./LICENSE.md for details

Further information: For further information have a look at ./doc/index.html and ./doc/users/cmake.html.

Continuous Integration Status:
