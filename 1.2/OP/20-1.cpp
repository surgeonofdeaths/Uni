#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum class Category {
    Personal,
    Corporate,
    Informational,
    Promo,
    Blog,
    ECommerce,
    SocialNetwork,
    Unknown
};

struct WebSite {
    string domainName; // повне доменне ім’я
    Category category;      // категорія (особистий, корпоративний, інформаційний, промо-сайт, блог, Інтернет-магазин, соціальна мережа тощо)
    int dailyVisits;        // кількість відвідувань в день
    int pageRank;           // рейтинг PR (число від 0 до 10)
};

string categoryToString(Category category) {
    switch (category) {
        case Category::Personal: return "Особистий";
        case Category::Corporate: return "Корпоративний";
        case Category::Informational: return "Інформаційний";
        case Category::Promo: return "Промо-сайт";
        case Category::Blog: return "Блог";
        case Category::ECommerce: return "Інтернет-магазин";
        case Category::SocialNetwork: return "Соціальна мережа";
        default: return "Невідомо";
    }
}

double calculateAverageDailyVisits(const vector<WebSite>& sites) {
    double totalVisits = 0;
    for (const auto& site : sites) {
        totalVisits += site.dailyVisits;
    }
    return totalVisits / sites.size();
}

double calculateAveragePageRank(const vector<WebSite>& sites) {
    double totalPageRank = 0;
    for (const auto& site : sites) {
        totalPageRank += site.pageRank;
    }
    return totalPageRank / sites.size();
}

int main() {
    vector<WebSite> websites = {
        {"www.example.com", Category::Informational, 5000, 8},
        {"www.blog.com", Category::Blog, 3000, 7},
        {"www.shop.com", Category::ECommerce, 10000, 9},
        {"www.social.com", Category::SocialNetwork, 20000, 6}
    };

    double averageDailyVisits = calculateAverageDailyVisits(websites);
    double averagePageRank = calculateAveragePageRank(websites);

    cout << "Середня кількість відвідувань в день: " << averageDailyVisits << endl;
    cout << "Середній рейтинг PR: " << averagePageRank << endl;

    return 0;
}
