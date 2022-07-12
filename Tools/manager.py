from PyQt5 import QtWidgets
# from PyQt5.uic import loadUi

import window_components.window_main as window_main
import window_components.create_class as create_class

class Ui_MainWindowC(QtWidgets.QMainWindow, window_main.Ui_MainWindow):
    def __init__(self, parent = None) -> None:
        super().__init__(parent)
        self.setupUi(self)
        self.connect_signals_slots()
        
    def connect_signals_slots(self):
        self.actionClass.triggered.connect(self.dialog_create_class)

    def dialog_create_class(self):
        self.window_create_class = Ui_CreateClassC()
        self.window_create_class.show()

class Ui_CreateClassC(QtWidgets.QWidget, create_class.Ui_Form):
    def __init__(self, parent = None) -> None:
        super().__init__(parent)
        self.setupUi(self)

if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    MainWindow = Ui_MainWindowC()
    MainWindow.show()
    sys.exit(app.exec_())