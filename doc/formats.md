# 文件格式文档

## 编译器配置文件
### _COMPILER-NAME_.json
应是一个字典, 格式如下
```json
{
	"args":{
		"arg-name-1" : "value1",
		"arg-name-2" : "value2",
		// 变量的声明如下
		// 变量应是 PROJECT-NAME.omgproj 文件中的索引
		"arg-name-3" : "${var1}",
	},
}
```

## 项目配置文件
### _PROJECT-NAME_.omgproj
TOML 文件格式 还没想好

## 最近项目文件
### recent
每行都是一个文件, 没什么好说的, 一行两个字符串, 用空格分开
前半是项目名, 后半是项目路径

## 编辑器许可证文件
### omglicense @beta
编辑器的配置文件, 里面有许可证序列号

## 编辑器配置文件
### omgcfg @beta
编辑器的配置文件 还没想好
