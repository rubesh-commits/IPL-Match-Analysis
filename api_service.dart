import 'dart:convert';
import 'package:http/http.dart' as http;

class ApiService {
  static const String baseUrl = "http://192.168.1.3:8000";

  static Future<Map<String, dynamic>> getTeamWins() async {
    final response = await http.get(Uri.parse("$baseUrl/team-wins"),
    );

    return jsonDecode(response.body);
  }

  static Future<Map<String, dynamic>> getTopBatsmen() async {
    final response = await http.get(Uri.parse("$baseUrl/top-batsmen"),
    );

    return jsonDecode(response.body);
  }

  static Future<Map<String, dynamic>> getTopBowlers() async {
    final response = await http.get(Uri.parse("$baseUrl/top-bowlers"),
    );

    return jsonDecode(response.body);
  }
}
