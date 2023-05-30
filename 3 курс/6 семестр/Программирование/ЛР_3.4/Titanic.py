import pandas as pd  # импортирование библиотеки для считывания данных

# считаем данных из файла, в качестве столбца индексов используем PassengerId
data = pd.read_csv('train.csv', index_col="PassengerId")

def get_sex_distrib(data):
    """
    1. Какое количество мужчин и женщин ехало на пароходе? Приведите два числа через пробел.
    """
    sex = data['Sex'].value_counts()

    return sex['male'], sex['female']

print(get_sex_distrib(data))
print('-'*30)

def get_port_distrib(data):
    """  
    2. Подсчитайте, сколько пассажиров загрузилось на борт в различных портах? Приведите три числа через пробел.
    """

    port = data['Embarked'].value_counts()
    return port['S'], port['Q'], port['C']

print(get_port_distrib(data))
print('-'*30)

def get_surv_percent(data):
    """
    3. Посчитайте долю погибших на пароходе (число и процент).
    """
    died, survived = data['Survived'].value_counts()
    dying_ratio = (died / (survived + died)) * 100
    return died, round(dying_ratio, 2)

print(get_surv_percent(data))
print('-'*30)

def get_class_distrib(data):
    """
    4. Какие доли составляли пассажиры первого, второго, третьего класса?    
    """
    ticket_class = data['Pclass'].value_counts()
    first_class, second_class, third_class = ticket_class
    first_class_ratio = (first_class / sum(ticket_class)) * 100
    second_class_ratio = (second_class / sum(ticket_class)) * 100
    third_class_ratio = (third_class / sum(ticket_class)) * 100
    class_stats = (
             round(first_class_ratio, 2),
             round(second_class_ratio, 2),
             round(third_class_ratio, 2)
            )
    return class_stats

print(get_class_distrib(data))
print('-'*30)

def find_corr_sibsp_parch(data):
    """
    5. Вычислите коэффициент корреляции Пирсона между количеством супругов (SibSp) и количеством детей (Parch).
    """
    corre = data['SibSp'].corr(data['Parch'], method='pearson')
    return round(corre, 2)

print(find_corr_sibsp_parch(data))
print('-'*30)

def find_corr_age_survival(data):
    """
    6.1. Выясните, есть ли корреляция (вычислите коэффициент корреляции Пирсона) между:
    - возрастом и параметром survival;
    """
    corre = data['Survived'].corr(data['Age'], method='pearson')
    return round(corre, 2)

print(find_corr_age_survival(data))
print('-'*30)

def find_corr_sex_survival(data):
    """
    6.2. Выясните, есть ли корреляция (вычислите коэффициент корреляции Пирсона) между:
    - полом человека и параметром survival;
    """
    gender_df = pd.Series([1 if i == 'male' else 0 for i in data['Sex']])
    return data['Survived'].corr(gender_df, method='pearson')

print(find_corr_sex_survival(data))
print('-'*30)

def find_corr_class_survival(data):
    """
    6.3. Выясните, есть ли корреляция (вычислите коэффициент корреляции Пирсона) между:
    - классом, в котором пассажир ехал, и параметром survival.
    """
    return data['Survived'].corr(data['Pclass'], method='pearson')

print(find_corr_class_survival(data))
print('-'*30)

def find_pass_mean_median(data):
    """
    7. Посчитайте средний возраст пассажиров и медиану.
    """
    mean_age = data['Age'].mean(skipna=True)
    median_age = data['Age'].median(skipna=True)
    return round(mean_age, 2), round(median_age, 2)

print(find_pass_mean_median(data))
print('-'*30)

def find_ticket_mean_median(data):
    """
    8. Посчитайте среднюю цену за билет и медиану.
    """
    mean_fare = data['Fare'].mean(skipna=True)
    median_fare = data['Fare'].median(skipna=True)
    return round(mean_fare, 2), round(median_fare, 2)

print(find_ticket_mean_median(data))
print('-'*30)

def find_popular_name(data):
    """
    9. Какое самое популярное мужское имя на корабле?
    """
    
    names = [i.split(', ')[1] for i in data['Name']]
    sorted_names = pd.Series(names).value_counts()
    return sorted_names.index[0], sorted_names.iat[0]

print(find_popular_name(data))
print('-'*30)

def find_popular_adult_names(data):
    """
    10. Какие самые популярные мужское и женские имена людей, старше 15 лет на корабле?
    """
    older_male = data[(data['Age'] > 15) & (data['Sex'] == 'male')]
    older_female = data[(data['Age'] > 15) & (data['Sex'] == 'female')]

    male_names = [i.split(', ')[1] for i in older_male['Name']]
    male_sorted_names = pd.Series(male_names).value_counts()

    female_names = [i.split(', ')[1] for i in older_female['Name']]
    female_sorted_names = pd.Series(female_names).value_counts()
    return male_sorted_names.index[0], male_sorted_names.iat[0], female_sorted_names.index[0], female_sorted_names.iat[0]

print(find_popular_adult_names(data))
