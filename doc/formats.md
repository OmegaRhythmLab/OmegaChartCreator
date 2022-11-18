# 文件格式文档

## 编译器配置文件
### _COMPILER-EXECUTABLE-NAME_.toml
编译器配置文件
```toml
...
# 在general下写什么都可以
[general]
icon = "./icon.png"
...

# 生成器模版
[generator]

# 空白模版
[generator.blank]
desc = "这是个空白模板" #描述
requirments = []
args = []
inputs = []

# 模版项目
[generator.demo]
desc = "这是个示例模板"
requirments = []
args = []
inputs = []

# 编译器配置
[compiler]
args = []
inputs = []

...
```

## 项目配置文件
### _PROJECT-NAME_.omgproj 
此文件应以编译器生成
必须有一下片段
```toml
...

project_name = "_PROJECT-NAME_"

[project]
type = "_PROJECT_TYPE_"

...
```

## 最近项目文件
### recent
每行都是一个文件, 没什么好说的, 一行三个字符串, 用空格分开
前半是项目名, 中间是项目类型, 后半是项目路径

## 编辑器许可证文件
### omglicense @beta
编辑器的配置文件, 里面有许可证序列号

## 编辑器配置文件
### omgcfg @beta
编辑器的配置文件 还没想好
