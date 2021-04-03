# AVR microcontroller lab 1

## Task

| Кнопка | Світлодіоди | Затримка | Алгоритм |
| ------ | ----------- | -------- | -------- |
| PA0    | port-K      | 1,05 сек | 6        |

### Опис алгоритму

Лінійка з 8-ми одноколірних світлодіодів. При натисканні кнопки світлодіоди починають почергово блимати через один від 7-виводу порту до 1, а потім далі від 6 до 0.  
P0← P2←P4←P6←P1←P3←P5←P7

## Getting Started

### Prerequisites

- Install [VS Code](https://code.visualstudio.com/Download)
- Install [PlatformIO](https://platformio.org/install/ide?install=vscode)
- Install [Proteus](https://www.labcenter.com/)

### Installing

- Clone repository into your system

```
git clone https://github.com/Ravenen/microcontroller_lab_1.git
```

### Executing program

- Build a project in `code` folder via PlatformIO builder
- Open Proteus project and run the simulation

## Authors

[Vitaliy Pavliyk (@ravenen)](https://github.com/Ravenen)
