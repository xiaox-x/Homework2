<h1 align = "center">第一次实验报告</h1> 

## 一、建模结果

本次实验选取的系统是教室管理系统，本系统开放给在校师生申请空闲教室。本次实验的建模结果包括结构化自然语言、UML类图、时序图和用例图，具体如下图所示：

<img src="https://gitee.com/image-md/img/raw/master/微信截图_20231027150627.png" style="zoom:33%;" />

<center>图1-1 用例图</center>

在校师生可使用本系统进行教室申请等操作，具体包括：登录系统、查看教室使用情况、创建申请、撤销申请、修改个人信息。系统管理员可以进行处理申请等操作，具体包括：登录系统、查看教室使用情况、处理申请、管理用户（添加、删除、修改）。

设计了八个实体类，分别是：people、学生、老师、管理员、账户、教室、申请、信息。其中管理员、教师和学生三个类是people这个类的子类。

<img src="https://gitee.com/image-md/img/raw/master/微信截图_20231027143246.png" style="zoom: 33%;" />

<center>图1-2 类图</center>

总共包括九个时序图，下边以创建申请的时序图为例：

<img src="https://gitee.com/image-md/img/raw/master/微信截图_20231027143420.png" style="zoom: 33%;" />

<center>图1-3 时序图（以创建申请的用例的时序图为例）</center>

所有时序图如下图所示：

<img src="https://gitee.com/image-md/img/raw/master/微信截图_20231027143827.png" style="zoom:33%;" />

<center>图1-4 所有时序图所在文件位置</center>

结构化自然语言结果如下图所示：

<img src="https://gitee.com/image-md/img/raw/master/微信截图_20231027144850.png" style="zoom:33%;" />
<center>图1-5 结构化自然语言</center>

## 二、模型规模说明

### 2.1 自然语言需求

用户需求数量：19

系统需求数量：21

### 2.2 用例图

Actor数量：3

用例数量：10

### 2.3 时序图

时序图数量：9

系统操作总数：27

### 2.4 OCL合约

合约数量：27

### 2.5 类图

类数量：8

## 三、需求原型化结果截图

以下是对主要的几个需求进行确认：

1、添加新用户，下面已添加学生为例：

<img src="https://gitee.com/image-md/img/raw/master/微信截图_20231027094756.png" style="zoom:33%;" />

在输入学生的相关信息后点击运行，即可添加一名学生用户

<img src="https://gitee.com/image-md/img/raw/master/微信截图_20231027095100.png" style="zoom:33%;" />

结果如上图。

2、创建申请，下面 以刚才创建的学生用户添加申请为例：

<img src="https://gitee.com/image-md/img/raw/master/微信截图_20231027095003.png" style="zoom:33%;" />

输入房间号，如：G308，输入时间和账号，以刚才创建的学生为例，账号为：S123456。

<img src="https://gitee.com/image-md/img/raw/master/微信截图_20231027095109.png" style="zoom:33%;" />

点击运行即可添加一个新的申请，此时申请的状态为“未处理”。如上图所示。

3、撤回申请，下面以另一个创建的申请为例：

<img src="https://gitee.com/image-md/img/raw/master/微信截图_20231027095157.png" style="zoom:33%;" />

输入需要撤销的申请编号，点击运行。

<img src="https://gitee.com/image-md/img/raw/master/微信截图_20231027095210.png" style="zoom:33%;" />

成功之后，申请中将不存在该申请。如上图所示。

4、修改个人信息，初始信息如下：

<img src="https://gitee.com/image-md/img/raw/master/微信截图_20231027152344.png" style="zoom:33%;" />

输入要修改的信息

<img src="https://gitee.com/image-md/img/raw/master/微信截图_20231027152415.png" style="zoom:33%;" />

运行之后，信息被修改，如下图所示：

<img src="https://gitee.com/image-md/img/raw/master/微信截图_20231027152424.png" style="zoom:33%;" />

5、删除用户，以删除创建的学生用户为例，账号为S123456，输入账号和管理员账号和密码

<img src="https://gitee.com/image-md/img/raw/master/微信截图_20231027095737.png" style="zoom:33%;" />

运行之后，将不存在该学生的账号，如下图所示

<img src="https://gitee.com/image-md/img/raw/master/微信截图_20231027095744.png" style="zoom:33%;" />

6、处理申请，管理员输入要处理的申请编号，和自己的管理员账号和密码

<img src="https://gitee.com/image-md/img/raw/master/微信截图_20231027095519.png" style="zoom:33%;" />

运行之后，相应的申请的状态变为”已处理“，如下图所示

<img src="https://gitee.com/image-md/img/raw/master/微信截图_20231027095525.png" style="zoom:33%;" />

## 四、架构设计截图

按照视频演示自动生成架构设计，截图如下：

<img src="https://gitee.com/image-md/img/raw/master/微信截图_20231114193123.png" style="zoom:33%;"/>

<img src="https://gitee.com/image-md/img/raw/master/微信截图_20231114193128.png" style="zoom:33%;"/>

<img src="https://gitee.com/image-md/img/raw/master/微信截图_20231114193214.png" style="zoom:33%;"/>

<img src="https://gitee.com/image-md/img/raw/master/微信截图_20231114193118.png" style="zoom:33%;"/>

## 五、面向对象类图截图

<img src="https://gitee.com/image-md/img/raw/master/微信截图_20231114193253.png" style="zoom:33%;"/>