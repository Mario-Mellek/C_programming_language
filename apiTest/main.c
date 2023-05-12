#include <stdio.h>
#include <curl/curl.h>

size_t write_data(void *ptr, size_t size, size_t nmemb, FILE *stream)
{
  size_t written = fwrite(ptr, size, nmemb, stream);
  return written;
}

int main(void)
{
  CURL *curl;
  CURLcode res;
  FILE *outfile;

  outfile = fopen("output.txt", "w");
  curl = curl_easy_init();
  if(curl) {
    curl_easy_setopt(curl, CURLOPT_URL, "https://quizapi.io/api/v1/questions?apiKey=vQZ7G5trs7YNFjEluKg94pPzoCTOJeoa53QSJz1n&category=linux&difficulty=Easy&limit=1&tags=Linux");
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, outfile);
    res = curl_easy_perform(curl);

    /* always cleanup */
    curl_easy_cleanup(curl);
  }
  fclose(outfile);
  return 0;
}
