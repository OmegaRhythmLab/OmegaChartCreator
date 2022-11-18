# 关于配置文件中的转义
## 怎么转义
在所有供occ读写的第三方配置文件中
如下
> ${config.author.name}
会获取到 occ 配置文件中的 author 下的 name 选项
目前只能获得字符串 ;懒得支持其他的

## 关于编译器
见[此](./formars.md#编译器配置文件)关于编译器配置文件的格式
1. 编译器的命名空间为 compiler 
例如: 
想要获得 general 下的 icon 选项
> ${compiler.general.icon}


