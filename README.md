# subpub_example
This package is for example of ros nodes publishers and subscribers in python and C++.

Instructions to run the C++ nodes, python nodes don't need compilation.

```
$ cd 
$ cd catkin_ws
$ catkin_make --only-pkg-with-deps subpub_example
```
Once the package is build, you can run the nodes written in C++.

```
$ rosrun subpub_example Publisher
$ rosrun subpub_example Subscriber
```
