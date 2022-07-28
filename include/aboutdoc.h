#ifndef ABOUTDOC_H
#define ABOUTDOC_H

#include <QFile>
#include <QMessageBox>

namespace Ui {
    class AboutDoc;
}

/**
 * @brief The AboutDoc creates a QDialog window with documentation which is getting from text file.
 */
class AboutDoc : public QDialog {
Q_OBJECT

public:

    /**
     * @brief AboutDoc Constructor
     * @param parent
     */
    explicit AboutDoc(QWidget *parent = nullptr);

    ~AboutDoc();

private slots:

    /**
     * @brief Slot for back to the menu button
     */
    void on_pushButtonBack_clicked();

private:
    Ui::AboutDoc *ui;
};

#endif // ABOUTDOC_H
