# subpub_example
This package is for example of ros nodes publishers and subscribers in python and C++. First compile the packages:

```
$ cd catkin_ws
$ catkin_make
```

Compile just one package:
```
catkin_make --only-pkg-with-deps subpub_example
```
The run the example nodes:
```
$ rosrun subpub_example Publisher
$ rosrun subpub_example Subscriber
```
