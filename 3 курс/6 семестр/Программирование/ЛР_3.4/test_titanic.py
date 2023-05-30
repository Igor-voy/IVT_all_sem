from Titanic import *


def test_get_sex_distrib():
    assert get_sex_distrib('train.csv') == (
        577, 314), " Количество мужчин и женщин на Титанике"


def test_get_port_distrib():
    assert get_port_distrib('train.cvs') == (644, 77, 168), "Количество пассажиров в различных портах"


def test_get_surv_percent():
    assert get_surv_percent('train.cvs') == (549, 61.62), "Количество погибших"


def test_get_class_distrib():
    assert get_class_distrib('train.cvs') == (55.11, 24.24, 20.65), "Доли первого, второго и третьего классов"


def test_find_corr_sibsp_parch():
    assert find_corr_sibsp_parch('train.cvs') == 0.41, "Корркляция между супругами и детьми"


def test_find_corr_age_survival():
    assert find_corr_age_survival('train.cvs') == -0.08, "Корркляция между возрастом и параметром 'выживание'"


def test_find_corr_sex_survival():
    assert find_corr_sex_survival('train.cvs') == 0.0031937280162279012, "Корркляция между полом и параметром 'выживание'"


def test_find_corr_class_survival():
    assert find_corr_class_survival('train.cvs') == -0.3384810359610148, "Корркляция между классом и параметром 'выживание'"


def test_find_pass_mean_median():
    assert find_pass_mean_median('train.cvs') == (29.7, 28.0), "Средний возраст и медиана"


def test_find_ticket_mean_median():
    assert find_ticket_mean_median('train.cvs') == (32.2, 14.45), "Средняя цена за билет и медиана"


def test_find_popular_name():
    assert find_popular_name('train.cvs') == ('Mr. John', 7), "Популярное мужское имя"


def test_find_popular_adult_names():
    assert find_popular_adult_names('train.cvs') == ('Mr. William', 5, 'Miss. Mary', 3), "Самые популярные мужское и женские имена людей, старше 15 лет на корабле"

